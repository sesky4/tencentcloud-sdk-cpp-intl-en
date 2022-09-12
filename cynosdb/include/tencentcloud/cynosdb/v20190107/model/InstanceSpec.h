/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCESPEC_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCESPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ZoneStockInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Details of purchasable instance specifications. `Cpu` and `Memory` determine the instance specification during instance creation. The value range of the storage capacity is [MinStorageSize,MaxStorageSize]
                */
                class InstanceSpec : public AbstractModel
                {
                public:
                    InstanceSpec();
                    ~InstanceSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of instance CPU cores
                     * @return Cpu Number of instance CPU cores
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置Number of instance CPU cores
                     * @param Cpu Number of instance CPU cores
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Instance memory in GB
                     * @return Memory Instance memory in GB
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置Instance memory in GB
                     * @param Memory Instance memory in GB
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Maximum instance storage capacity GB
                     * @return MaxStorageSize Maximum instance storage capacity GB
                     */
                    uint64_t GetMaxStorageSize() const;

                    /**
                     * 设置Maximum instance storage capacity GB
                     * @param MaxStorageSize Maximum instance storage capacity GB
                     */
                    void SetMaxStorageSize(const uint64_t& _maxStorageSize);

                    /**
                     * 判断参数 MaxStorageSize 是否已赋值
                     * @return MaxStorageSize 是否已赋值
                     */
                    bool MaxStorageSizeHasBeenSet() const;

                    /**
                     * 获取Minimum instance storage capacity GB
                     * @return MinStorageSize Minimum instance storage capacity GB
                     */
                    uint64_t GetMinStorageSize() const;

                    /**
                     * 设置Minimum instance storage capacity GB
                     * @param MinStorageSize Minimum instance storage capacity GB
                     */
                    void SetMinStorageSize(const uint64_t& _minStorageSize);

                    /**
                     * 判断参数 MinStorageSize 是否已赋值
                     * @return MinStorageSize 是否已赋值
                     */
                    bool MinStorageSizeHasBeenSet() const;

                    /**
                     * 获取Whether there is an inventory.
                     * @return HasStock Whether there is an inventory.
                     */
                    bool GetHasStock() const;

                    /**
                     * 设置Whether there is an inventory.
                     * @param HasStock Whether there is an inventory.
                     */
                    void SetHasStock(const bool& _hasStock);

                    /**
                     * 判断参数 HasStock 是否已赋值
                     * @return HasStock 是否已赋值
                     */
                    bool HasStockHasBeenSet() const;

                    /**
                     * 获取Machine type
                     * @return MachineType Machine type
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置Machine type
                     * @param MachineType Machine type
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取Maximum IOPS
                     * @return MaxIops Maximum IOPS
                     */
                    int64_t GetMaxIops() const;

                    /**
                     * 设置Maximum IOPS
                     * @param MaxIops Maximum IOPS
                     */
                    void SetMaxIops(const int64_t& _maxIops);

                    /**
                     * 判断参数 MaxIops 是否已赋值
                     * @return MaxIops 是否已赋值
                     */
                    bool MaxIopsHasBeenSet() const;

                    /**
                     * 获取Maximum bandwidth
                     * @return MaxIoBandWidth Maximum bandwidth
                     */
                    int64_t GetMaxIoBandWidth() const;

                    /**
                     * 设置Maximum bandwidth
                     * @param MaxIoBandWidth Maximum bandwidth
                     */
                    void SetMaxIoBandWidth(const int64_t& _maxIoBandWidth);

                    /**
                     * 判断参数 MaxIoBandWidth 是否已赋值
                     * @return MaxIoBandWidth 是否已赋值
                     */
                    bool MaxIoBandWidthHasBeenSet() const;

                    /**
                     * 获取Inventory information in a region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneStockInfos Inventory information in a region
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ZoneStockInfo> GetZoneStockInfos() const;

                    /**
                     * 设置Inventory information in a region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ZoneStockInfos Inventory information in a region
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetZoneStockInfos(const std::vector<ZoneStockInfo>& _zoneStockInfos);

                    /**
                     * 判断参数 ZoneStockInfos 是否已赋值
                     * @return ZoneStockInfos 是否已赋值
                     */
                    bool ZoneStockInfosHasBeenSet() const;

                private:

                    /**
                     * Number of instance CPU cores
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Instance memory in GB
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Maximum instance storage capacity GB
                     */
                    uint64_t m_maxStorageSize;
                    bool m_maxStorageSizeHasBeenSet;

                    /**
                     * Minimum instance storage capacity GB
                     */
                    uint64_t m_minStorageSize;
                    bool m_minStorageSizeHasBeenSet;

                    /**
                     * Whether there is an inventory.
                     */
                    bool m_hasStock;
                    bool m_hasStockHasBeenSet;

                    /**
                     * Machine type
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * Maximum IOPS
                     */
                    int64_t m_maxIops;
                    bool m_maxIopsHasBeenSet;

                    /**
                     * Maximum bandwidth
                     */
                    int64_t m_maxIoBandWidth;
                    bool m_maxIoBandWidthHasBeenSet;

                    /**
                     * Inventory information in a region
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ZoneStockInfo> m_zoneStockInfos;
                    bool m_zoneStockInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCESPEC_H_
