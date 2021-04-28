/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FCColorGradient : NSObject <NSCopying> {

	NSArray* _colors;
	NSArray* _locations;
	CGPoint _startPoint;
	CGPoint _endPoint;

}

@property (nonatomic,readonly) CGPoint startPoint;               //@synthesize startPoint=_startPoint - In the implementation block
@property (nonatomic,readonly) CGPoint endPoint;                 //@synthesize endPoint=_endPoint - In the implementation block
@property (nonatomic,readonly) NSArray * colors;                 //@synthesize colors=_colors - In the implementation block
@property (nonatomic,readonly) NSArray * locations;              //@synthesize locations=_locations - In the implementation block
+(id)colorGradientWithColors:(id)arg1 locations:(id)arg2 ;
+(id)colorGradientWithConfigDict:(id)arg1 ;
+(id)blackGradient;
+(id)whiteGradient;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(CGPoint)startPoint;
-(NSArray *)colors;
-(NSArray *)locations;
-(CGPoint)endPoint;
-(id)initWithStartPoint:(CGPoint)arg1 endPoint:(CGPoint)arg2 colors:(id)arg3 locations:(id)arg4 ;
-(char)isSimilarToColorGradient:(id)arg1 withinPercentage:(double)arg2 ;
@end
