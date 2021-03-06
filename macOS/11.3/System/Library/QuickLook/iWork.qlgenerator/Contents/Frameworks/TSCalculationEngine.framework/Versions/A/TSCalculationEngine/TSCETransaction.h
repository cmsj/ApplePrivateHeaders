/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCalculationEngine.framework/Versions/A/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
@interface TSCETransaction : NSObject {

	TSCEReferenceSet* _cellRefsToCheck;
	TSKUIDStruct _skipRepairBadRefsOwnerUID;

}
-(void)dealloc;
-(id)description;
-(id)initWithCalcEngine:(id)arg1 ;
-(void)addCellRefToCheck:(const TSCECellRef*)arg1 ;
-(const TSCEReferenceSet*)cellRefsToCheck;
-(void)skipRepairBadRefsForOwnerUID:(const TSKUIDStruct*)arg1 ;
-(char)isSkippingRepairBadRefsForOwnerUID:(const TSKUIDStruct*)arg1 ;
@end

