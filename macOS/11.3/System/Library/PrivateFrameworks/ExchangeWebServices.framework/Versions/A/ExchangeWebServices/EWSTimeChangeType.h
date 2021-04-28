/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/XSDefinitionProvider.h>

@class NSDateComponents, NSString;

@interface EWSTimeChangeType : NSObject <XSDefinitionProvider> {

	char _IsOffsetSpecified;
	double _Offset;
	id _TimeChangePattern;
	NSDateComponents* _Time;
	NSString* _TimeZoneName;

}

@property (assign,nonatomic) double Offset;                         //@synthesize Offset=_Offset - In the implementation block
@property (assign,nonatomic) char IsOffsetSpecified;                //@synthesize IsOffsetSpecified=_IsOffsetSpecified - In the implementation block
@property (nonatomic,retain) id TimeChangePattern;                  //@synthesize TimeChangePattern=_TimeChangePattern - In the implementation block
@property (nonatomic,retain) NSDateComponents * Time;               //@synthesize Time=_Time - In the implementation block
@property (nonatomic,copy) NSString * TimeZoneName;                 //@synthesize TimeZoneName=_TimeZoneName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definition;
-(NSString *)description;
-(void)setOffset:(double)arg1 ;
-(void)setTime:(NSDateComponents *)arg1 ;
-(void)setTimeZoneName:(NSString *)arg1 ;
-(NSString *)TimeZoneName;
-(double)Offset;
-(NSDateComponents *)Time;
-(char)IsOffsetSpecified;
-(void)setIsOffsetSpecified:(char)arg1 ;
-(id)TimeChangePattern;
-(void)setTimeChangePattern:(id)arg1 ;
@end
