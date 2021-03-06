/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _WBSSafariCyclerConfigurationCommand : NSObject {

	NSString* _name;
	NSString* _help;
	NSString* _usage;
	unsigned long long _minimumArgumentCount;
	unsigned long long _maximumArgumentCount;
	id _target;
	SEL _action;

}

@property (nonatomic,copy,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * help;                               //@synthesize help=_help - In the implementation block
@property (nonatomic,copy) NSString * usage;                                       //@synthesize usage=_usage - In the implementation block
@property (assign,nonatomic) unsigned long long minimumArgumentCount;              //@synthesize minimumArgumentCount=_minimumArgumentCount - In the implementation block
@property (assign,nonatomic) unsigned long long maximumArgumentCount;              //@synthesize maximumArgumentCount=_maximumArgumentCount - In the implementation block
@property (assign,nonatomic,__weak) id target;                                     //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                                           //@synthesize action=_action - In the implementation block
-(id)init;
-(NSString *)name;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(void)setUsage:(NSString *)arg1 ;
-(NSString *)usage;
-(id)initWithName:(id)arg1 help:(id)arg2 ;
-(void)setArgumentCount:(unsigned long long)arg1 ;
-(char)invokeWithParameters:(id)arg1 ;
-(NSString *)help;
-(unsigned long long)minimumArgumentCount;
-(void)setMinimumArgumentCount:(unsigned long long)arg1 ;
-(unsigned long long)maximumArgumentCount;
-(void)setMaximumArgumentCount:(unsigned long long)arg1 ;
@end

