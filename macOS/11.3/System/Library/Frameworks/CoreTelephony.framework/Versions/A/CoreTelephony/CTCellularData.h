/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Versions/A/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CTCellularData : NSObject {

	/*^block*/id _cellularDataRestrictionDidUpdateNotifier;

}

@property (copy) id cellularDataRestrictionDidUpdateNotifier;                   //@synthesize cellularDataRestrictionDidUpdateNotifier=_cellularDataRestrictionDidUpdateNotifier - In the implementation block
@property (nonatomic,readonly) unsigned long long restrictedState; 
-(unsigned long long)restrictedState;
-(id)cellularDataRestrictionDidUpdateNotifier;
-(void)setCellularDataRestrictionDidUpdateNotifier:(id)arg1 ;
@end

