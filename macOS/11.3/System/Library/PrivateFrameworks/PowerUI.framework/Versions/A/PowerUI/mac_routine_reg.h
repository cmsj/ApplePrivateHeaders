/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/Versions/A/PowerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MLModel;

@interface mac_routine_reg : NSObject {

	MLModel* _model;

}

@property (nonatomic,readonly) MLModel * model;              //@synthesize model=_model - In the implementation block
+(void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)URLOfModelInThisBundle;
+(void)loadWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(MLModel *)model;
-(id)predictionFromFeatures:(id)arg1 error:(id*)arg2 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)initWithMLModel:(id)arg1 ;
-(id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionFromPlugin_battery_level:(double)arg1 prev_charge_duration_1:(double)arg2 hour:(double)arg3 hours_until_use:(double)arg4 med_dur_1:(double)arg5 med_dur_2:(double)arg6 med_dur_4:(double)arg7 med_dur_8:(double)arg8 med_dur_16:(double)arg9 med_dur_24:(double)arg10 std_dur_1:(double)arg11 std_dur_2:(double)arg12 std_dur_4:(double)arg13 std_dur_8:(double)arg14 std_dur_16:(double)arg15 std_dur_24:(double)arg16 cnt_dur_24:(double)arg17 cnt_dur_2:(double)arg18 hour_plus_0:(double)arg19 hour_plus_1:(double)arg20 hour_plus_2:(double)arg21 hour_plus_3:(double)arg22 hour_plus_4:(double)arg23 hour_plus_5:(double)arg24 error:(id*)arg25 ;
@end

