#ifndef PIMMANAGER_H
#define PIMMANAGER_H

class PimManager {
public:
    PimManager(uint32_t num_dpus, const std::string& profile = "");
    ~PimManager();

    void Load_Binary_To_Dpus(const std::string& binary);
    size_t GetNumDpus();

    template <typename Element>
    int Run_On_Pim(Element* a, const Element& b);

private:
    class PimManagerImpl;   // Forward declaration of the implementation class
    PimManagerImpl* PmImpl;  // Pointer to the implementation
};

#endif  // PIMMANAGER_H
