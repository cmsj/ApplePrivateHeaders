/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/Versions/A/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/TDAsset.h>

@class NSSet;

@interface TDPhotoshopAsset : TDAsset

@property (nonatomic,retain) NSSet * productions; 
-(char)hasProduction;
-(id)production;
-(id)_activeProductionWithRenditionsInProductions:(id)arg1 ;
-(id)_productionWithRenditionsInProductions:(id)arg1 ;
-(char)hasCursorProduction;
-(id)copyDataFromAttributes;
-(void)setAttributesFromCopyData:(id)arg1 ;
@end
