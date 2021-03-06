/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSCHStyleSemanticTag;

@interface TSCHSemanticTagAndPropertyPair : NSObject <NSCopying> {

	int _property;
	TSCHStyleSemanticTag* _semanticTag;

}

@property (nonatomic,copy,readonly) TSCHStyleSemanticTag * semanticTag;              //@synthesize semanticTag=_semanticTag - In the implementation block
@property (nonatomic,readonly) int property;                                         //@synthesize property=_property - In the implementation block
+(id)semanticTagToSemanticUsagesMapForSemanticUsages:(id)arg1 ;
+(id)pairWithSemanticTag:(id)arg1 property:(int)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)property;
-(TSCHStyleSemanticTag *)semanticTag;
-(id)initWithSemanticTag:(id)arg1 property:(int)arg2 ;
@end

