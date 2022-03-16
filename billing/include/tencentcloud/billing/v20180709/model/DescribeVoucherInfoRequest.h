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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERINFOREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeVoucherInfo request structure.
                */
                class DescribeVoucherInfoRequest : public AbstractModel
                {
                public:
                    DescribeVoucherInfoRequest();
                    ~DescribeVoucherInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The number of records per page. The default is 20, and the maximum is 1,000.
                     * @return Limit The number of records per page. The default is 20, and the maximum is 1,000.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The number of records per page. The default is 20, and the maximum is 1,000.
                     * @param Limit The number of records per page. The default is 20, and the maximum is 1,000.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取The page number the records start from. The default is 1.
                     * @return Offset The page number the records start from. The default is 1.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The page number the records start from. The default is 1.
                     * @param Offset The page number the records start from. The default is 1.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The voucher status. Valid values: `unUsed`, `used`, `delivered`, `cancel`, `overdue`.
                     * @return Status The voucher status. Valid values: `unUsed`, `used`, `delivered`, `cancel`, `overdue`.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The voucher status. Valid values: `unUsed`, `used`, `delivered`, `cancel`, `overdue`.
                     * @param Status The voucher status. Valid values: `unUsed`, `used`, `delivered`, `cancel`, `overdue`.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The voucher ID.
                     * @return VoucherId The voucher ID.
                     */
                    std::string GetVoucherId() const;

                    /**
                     * 设置The voucher ID.
                     * @param VoucherId The voucher ID.
                     */
                    void SetVoucherId(const std::string& _voucherId);

                    /**
                     * 判断参数 VoucherId 是否已赋值
                     * @return VoucherId 是否已赋值
                     */
                    bool VoucherIdHasBeenSet() const;

                    /**
                     * 获取The voucher order ID.
                     * @return CodeId The voucher order ID.
                     */
                    std::string GetCodeId() const;

                    /**
                     * 设置The voucher order ID.
                     * @param CodeId The voucher order ID.
                     */
                    void SetCodeId(const std::string& _codeId);

                    /**
                     * 判断参数 CodeId 是否已赋值
                     * @return CodeId 是否已赋值
                     */
                    bool CodeIdHasBeenSet() const;

                    /**
                     * 获取The product code.
                     * @return ProductCode The product code.
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置The product code.
                     * @param ProductCode The product code.
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取The campaign ID.
                     * @return ActivityId The campaign ID.
                     */
                    std::string GetActivityId() const;

                    /**
                     * 设置The campaign ID.
                     * @param ActivityId The campaign ID.
                     */
                    void SetActivityId(const std::string& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     */
                    bool ActivityIdHasBeenSet() const;

                    /**
                     * 获取The voucher name.
                     * @return VoucherName The voucher name.
                     */
                    std::string GetVoucherName() const;

                    /**
                     * 设置The voucher name.
                     * @param VoucherName The voucher name.
                     */
                    void SetVoucherName(const std::string& _voucherName);

                    /**
                     * 判断参数 VoucherName 是否已赋值
                     * @return VoucherName 是否已赋值
                     */
                    bool VoucherNameHasBeenSet() const;

                    /**
                     * 获取The start time of the promotional campaign.
                     * @return TimeFrom The start time of the promotional campaign.
                     */
                    std::string GetTimeFrom() const;

                    /**
                     * 设置The start time of the promotional campaign.
                     * @param TimeFrom The start time of the promotional campaign.
                     */
                    void SetTimeFrom(const std::string& _timeFrom);

                    /**
                     * 判断参数 TimeFrom 是否已赋值
                     * @return TimeFrom 是否已赋值
                     */
                    bool TimeFromHasBeenSet() const;

                    /**
                     * 获取The end time of the promotional campaign.
                     * @return TimeTo The end time of the promotional campaign.
                     */
                    std::string GetTimeTo() const;

                    /**
                     * 设置The end time of the promotional campaign.
                     * @param TimeTo The end time of the promotional campaign.
                     */
                    void SetTimeTo(const std::string& _timeTo);

                    /**
                     * 判断参数 TimeTo 是否已赋值
                     * @return TimeTo 是否已赋值
                     */
                    bool TimeToHasBeenSet() const;

                    /**
                     * 获取The field used to sort the records. Valid values: BeginTime, EndTime, CreateTime.
                     * @return SortField The field used to sort the records. Valid values: BeginTime, EndTime, CreateTime.
                     */
                    std::string GetSortField() const;

                    /**
                     * 设置The field used to sort the records. Valid values: BeginTime, EndTime, CreateTime.
                     * @param SortField The field used to sort the records. Valid values: BeginTime, EndTime, CreateTime.
                     */
                    void SetSortField(const std::string& _sortField);

                    /**
                     * 判断参数 SortField 是否已赋值
                     * @return SortField 是否已赋值
                     */
                    bool SortFieldHasBeenSet() const;

                    /**
                     * 获取Whether to sort the records in ascending or descending order. Valid values: desc, asc.
                     * @return SortOrder Whether to sort the records in ascending or descending order. Valid values: desc, asc.
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置Whether to sort the records in ascending or descending order. Valid values: desc, asc.
                     * @param SortOrder Whether to sort the records in ascending or descending order. Valid values: desc, asc.
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     */
                    bool SortOrderHasBeenSet() const;

                    /**
                     * 获取The payment mode. Valid values: `postPay`: pay-as-you-go; `prePay`: prepaid; `riPay`: reserved instance; empty or `*`: all. If this parameter is empty or `*`, `productCode` and `subProductCode` must also be empty.
                     * @return PayMode The payment mode. Valid values: `postPay`: pay-as-you-go; `prePay`: prepaid; `riPay`: reserved instance; empty or `*`: all. If this parameter is empty or `*`, `productCode` and `subProductCode` must also be empty.
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置The payment mode. Valid values: `postPay`: pay-as-you-go; `prePay`: prepaid; `riPay`: reserved instance; empty or `*`: all. If this parameter is empty or `*`, `productCode` and `subProductCode` must also be empty.
                     * @param PayMode The payment mode. Valid values: `postPay`: pay-as-you-go; `prePay`: prepaid; `riPay`: reserved instance; empty or `*`: all. If this parameter is empty or `*`, `productCode` and `subProductCode` must also be empty.
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取If `PayMode` is `postPay`, this parameter may be `spotpay` (spot instance) or `settle account` (regular pay-as-you-go). If `PayMode` is `prePay`, this parameter may be `purchase`, `renew`, or `modify` (downgrade/upgrade). If `PayMode` is `riPay`, this parameter may be `oneOffFee` (prepayment of reserved instance) or `hourlyFee` (hourly billing of reserved instance). `*` means to query vouchers that support all billing scenarios.
                     * @return PayScene If `PayMode` is `postPay`, this parameter may be `spotpay` (spot instance) or `settle account` (regular pay-as-you-go). If `PayMode` is `prePay`, this parameter may be `purchase`, `renew`, or `modify` (downgrade/upgrade). If `PayMode` is `riPay`, this parameter may be `oneOffFee` (prepayment of reserved instance) or `hourlyFee` (hourly billing of reserved instance). `*` means to query vouchers that support all billing scenarios.
                     */
                    std::string GetPayScene() const;

                    /**
                     * 设置If `PayMode` is `postPay`, this parameter may be `spotpay` (spot instance) or `settle account` (regular pay-as-you-go). If `PayMode` is `prePay`, this parameter may be `purchase`, `renew`, or `modify` (downgrade/upgrade). If `PayMode` is `riPay`, this parameter may be `oneOffFee` (prepayment of reserved instance) or `hourlyFee` (hourly billing of reserved instance). `*` means to query vouchers that support all billing scenarios.
                     * @param PayScene If `PayMode` is `postPay`, this parameter may be `spotpay` (spot instance) or `settle account` (regular pay-as-you-go). If `PayMode` is `prePay`, this parameter may be `purchase`, `renew`, or `modify` (downgrade/upgrade). If `PayMode` is `riPay`, this parameter may be `oneOffFee` (prepayment of reserved instance) or `hourlyFee` (hourly billing of reserved instance). `*` means to query vouchers that support all billing scenarios.
                     */
                    void SetPayScene(const std::string& _payScene);

                    /**
                     * 判断参数 PayScene 是否已赋值
                     * @return PayScene 是否已赋值
                     */
                    bool PaySceneHasBeenSet() const;

                    /**
                     * 获取The operator. The default is the UIN of the current user.
                     * @return Operator The operator. The default is the UIN of the current user.
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置The operator. The default is the UIN of the current user.
                     * @param Operator The operator. The default is the UIN of the current user.
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * The number of records per page. The default is 20, and the maximum is 1,000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The page number the records start from. The default is 1.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The voucher status. Valid values: `unUsed`, `used`, `delivered`, `cancel`, `overdue`.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The voucher ID.
                     */
                    std::string m_voucherId;
                    bool m_voucherIdHasBeenSet;

                    /**
                     * The voucher order ID.
                     */
                    std::string m_codeId;
                    bool m_codeIdHasBeenSet;

                    /**
                     * The product code.
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * The campaign ID.
                     */
                    std::string m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * The voucher name.
                     */
                    std::string m_voucherName;
                    bool m_voucherNameHasBeenSet;

                    /**
                     * The start time of the promotional campaign.
                     */
                    std::string m_timeFrom;
                    bool m_timeFromHasBeenSet;

                    /**
                     * The end time of the promotional campaign.
                     */
                    std::string m_timeTo;
                    bool m_timeToHasBeenSet;

                    /**
                     * The field used to sort the records. Valid values: BeginTime, EndTime, CreateTime.
                     */
                    std::string m_sortField;
                    bool m_sortFieldHasBeenSet;

                    /**
                     * Whether to sort the records in ascending or descending order. Valid values: desc, asc.
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                    /**
                     * The payment mode. Valid values: `postPay`: pay-as-you-go; `prePay`: prepaid; `riPay`: reserved instance; empty or `*`: all. If this parameter is empty or `*`, `productCode` and `subProductCode` must also be empty.
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * If `PayMode` is `postPay`, this parameter may be `spotpay` (spot instance) or `settle account` (regular pay-as-you-go). If `PayMode` is `prePay`, this parameter may be `purchase`, `renew`, or `modify` (downgrade/upgrade). If `PayMode` is `riPay`, this parameter may be `oneOffFee` (prepayment of reserved instance) or `hourlyFee` (hourly billing of reserved instance). `*` means to query vouchers that support all billing scenarios.
                     */
                    std::string m_payScene;
                    bool m_paySceneHasBeenSet;

                    /**
                     * The operator. The default is the UIN of the current user.
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERINFOREQUEST_H_
