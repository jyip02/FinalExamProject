#include "BobAndAliceGameSubsystem.h"

void UBobAndAliceGameSubsystem::Initialize(
    FSubsystemCollectionBase &Collection) {
  Super::Initialize(Collection);
}

void UBobAndAliceGameSubsystem::Deinitialize() { Super::Deinitialize(); }

void UBobAndAliceGameSubsystem::SaveTimerToSubSystem(const float TimeLimit)
{
	LocalTimer = TimeLimit;
}

float UBobAndAliceGameSubsystem::GetLocalSavedTimer() const
{
	return LocalTimer;
}
void UBobAndAliceGameSubsystem::SavePackageToSubSystem(const bool PackageCollected)
{
	LocalPackagedCollected = PackageCollected;
}

bool UBobAndAliceGameSubsystem::GetLocalPackagedCollected() const
{
	return LocalPackagedCollected;
}