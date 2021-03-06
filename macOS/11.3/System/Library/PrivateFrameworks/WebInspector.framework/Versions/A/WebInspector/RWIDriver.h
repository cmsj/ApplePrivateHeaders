/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/Versions/A/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RWIDriverSessionProvider;
@class RWITarget, RWIDriverState, RWIDriverConfiguration, NSString, NSSet;

@interface RWIDriver : NSObject {

	char _registered;
	RWITarget* _target;
	RWIDriverState* _state;
	RWIDriverConfiguration* _configuration;
	id<RWIDriverSessionProvider> _sessionProvider;

}

@property (assign,getter=isRegistered,nonatomic) char registered;                       //@synthesize registered=_registered - In the implementation block
@property (nonatomic,copy) RWIDriverState * state;                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) RWIDriverConfiguration * configuration;                      //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) id<RWIDriverSessionProvider> sessionProvider;              //@synthesize sessionProvider=_sessionProvider - In the implementation block
@property (nonatomic,readonly) RWITarget * target;                                      //@synthesize target=_target - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * version; 
@property (nonatomic,copy,readonly) NSString * hostname; 
@property (nonatomic,readonly) long long port; 
@property (getter=isActive,nonatomic,readonly) char active; 
@property (nonatomic,copy,readonly) NSSet * sessionIdentifiers; 
-(NSString *)name;
-(RWIDriverState *)state;
-(long long)port;
-(RWITarget *)target;
-(NSString *)identifier;
-(NSString *)version;
-(char)isActive;
-(void)setState:(RWIDriverState *)arg1 ;
-(void)start;
-(void)stop;
-(RWIDriverConfiguration *)configuration;
-(void)setConfiguration:(RWIDriverConfiguration *)arg1 ;
-(NSString *)hostname;
-(void)setRegistered:(char)arg1 ;
-(id<RWIDriverSessionProvider>)sessionProvider;
-(void)setSessionProvider:(id<RWIDriverSessionProvider>)arg1 ;
-(char)isRegistered;
-(NSSet *)sessionIdentifiers;
-(id)initWithConfiguration:(id)arg1 initialState:(id)arg2 relatedTarget:(id)arg3 ;
-(id)localSessionWithIdentifier:(id)arg1 ;
@end

