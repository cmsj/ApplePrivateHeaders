/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSStyles.framework/Versions/A/TSStyles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSStyles/TSStyles-Structs.h>
#import <TSStyles/TSSPropertySet.h>

@interface TSSMutablePropertySet : TSSPropertySet
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)removeProperties:(id)arg1 ;
-(void)addProperties:(id)arg1 ;
-(void)removeProperty:(int)arg1 ;
-(void)addProperty:(int)arg1 ;
-(void)removeAllPropertyValues;
-(id)initWithFirstProperty:(int)arg1 argumentList:(_va_list_tag*)arg2 ;
-(id)initWithPropertySet:(id)arg1 ;
-(void)intersectPropertySet:(id)arg1 ;
@end
