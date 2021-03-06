/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INBillPayee, INDateComponentsRange;


@protocol INSearchForBillsIntentExport <NSObject,JSExport>
@property (copy) INBillPayee * billPayee; 
@property (copy) INDateComponentsRange * paymentDateRange; 
@property (assign) long long billType; 
@property (assign) long long status; 
@property (copy) INDateComponentsRange * dueDateRange; 
@required
-(id)init;
-(long long)status;
-(void)setStatus:(long long)arg1;
-(INBillPayee *)billPayee;
-(void)setBillPayee:(id)arg1;
-(long long)billType;
-(void)setBillType:(long long)arg1;
-(INDateComponentsRange *)dueDateRange;
-(void)setDueDateRange:(id)arg1;
-(INDateComponentsRange *)paymentDateRange;
-(void)setPaymentDateRange:(id)arg1;

@end

