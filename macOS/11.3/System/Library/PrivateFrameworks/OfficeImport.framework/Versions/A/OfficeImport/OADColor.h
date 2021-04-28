/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface OADColor : NSObject <NSCopying> {

	NSMutableArray* mTransforms;

}
+(id)tsuColorWithColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4 ;
+(id)basicMapOfColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4 ;
+(id)rgbColorWithColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4 ;
+(float)alphaWithColor:(id)arg1 ;
+(id)tsuColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 ;
+(id)tsuColorWithRgbColor:(id)arg1 ;
+(int)mapSchemeColorID:(int)arg1 colorMap:(id)arg2 ;
+(id)mapAdjustedColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)transforms;
-(void)addTransform:(id)arg1 ;
-(id)colorForStyleColor:(id)arg1 ;
-(void)setTransforms:(id)arg1 ;
-(void)addTransformOfType:(int)arg1 ;
-(void)addTransformOfType:(int)arg1 value:(float)arg2 ;
@end
