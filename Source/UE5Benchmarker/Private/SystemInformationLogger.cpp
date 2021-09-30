// Created by Light3039, under MIT5 license

#include "SystemInformationLogger.h"

#include "InfoMotherboard.h"
#include "InfoOS.h"
#include "InfoRam.h"
#include "InfoCPU.h"
#include "InfoGPU.h"
#include "InfoHardDisk.h"

ASystemInformationLogger::ASystemInformationLogger()
{
	for (const auto& motherboardInfo : SystemInfo::FMotherboard::FetchInfo())
		motherboardInfo.LogToUE_LOG();

	for (const auto& osInfo : SystemInfo::FOperatingSystem::FetchInfo())
		osInfo.LogToUE_LOG();

	for (const auto& cpuInfo : SystemInfo::FCPU::FetchInfo())
		cpuInfo.LogToUE_LOG();

	for (const auto& gpuInfo : SystemInfo::FGPU::FetchInfo())
		gpuInfo.LogToUE_LOG();

	for (const auto& ramInfo : SystemInfo::FRAM::FetchInfo())
		ramInfo.LogToUE_LOG();

	for (const auto& hardDiskinfo : SystemInfo::FHardDisk::FetchInfo())
		hardDiskinfo.LogToUE_LOG();
}