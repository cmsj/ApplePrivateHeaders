/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSStyles.framework/Versions/A/TSStyles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSSMutablePropertySet, TSSPropertySet;

@interface TSSPropertySetChangeDetails : NSObject {

	TSSMutablePropertySet* mChangedProperties;

}

@property (nonatomic,readonly) TSSPropertySet * changedProperties; 
-(id)init;
-(TSSPropertySet *)changedProperties;
-(void)addChangedProperty:(int)arg1 ;
-(id)initWithChangedProperties:(id)arg1 ;
-(void)addChangedProperties:(id)arg1 ;
@end

