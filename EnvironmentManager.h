#ifndef ENVIRONMENT_MANAGER_H
#define ENVIRONMENT_MANAGER_H

#include <string>
#include <vector>

// EnvironmentManager: Manages the virtual environment where the avatar operates
class EnvironmentManager {
private:
    std::vector<Environment> environments;  // List of available environments
    Environment currentEnvironment;         // The currently loaded environment

public:
    EnvironmentManager();

    // Load an environment by name
    void LoadEnvironment(const std::string& environmentName);

    // Set the lighting and other conditions in the current environment
    void SetLightingConditions(LightingSettings settings);

    // Render the current environment
    void RenderEnvironment();
};

#endif // ENVIRONMENT_MANAGER_H
