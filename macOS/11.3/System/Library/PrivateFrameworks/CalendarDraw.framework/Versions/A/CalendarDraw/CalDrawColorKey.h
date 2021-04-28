/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarDraw.framework/Versions/A/CalendarDraw
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDraw/CalendarDraw-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CalDrawColorKey : NSObject <NSCopying> {

	NSString* _styleRef;

}

@property (copy) NSString * styleRef;              //@synthesize styleRef=_styleRef - In the implementation block
+(id)colorKeyForCGColor:(CGColorRef)arg1 ;
+(id)colorKeyForNSColor:(id)arg1 ;
+(id)colorKeyForConstantColor:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)setStyleRef:(NSString *)arg1 ;
-(NSString *)styleRef;
@end
