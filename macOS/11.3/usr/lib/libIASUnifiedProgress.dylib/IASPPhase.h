/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libIASUnifiedProgress.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface IASPPhase : NSObject <NSSecureCoding> {

	float _percentage;
	NSString* _name;
	long long _delay;

}

@property (readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (readonly) float percentage;                 //@synthesize percentage=_percentage - In the implementation block
@property (readonly) long long delay;                  //@synthesize delay=_delay - In the implementation block
@property (readonly) NSDictionary * info; 
+(char)supportsSecureCoding;
+(id)phaseWithInfo:(id)arg1 ;
+(id)phaseWithName:(id)arg1 percentage:(float)arg2 delay:(long long)arg3 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInfo:(id)arg1 ;
-(NSDictionary *)info;
-(long long)delay;
-(float)percentage;
-(id)initWithName:(id)arg1 percentage:(float)arg2 delay:(long long)arg3 ;
@end

