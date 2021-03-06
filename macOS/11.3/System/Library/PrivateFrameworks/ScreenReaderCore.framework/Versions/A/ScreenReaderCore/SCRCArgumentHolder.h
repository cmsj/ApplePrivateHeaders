/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/Versions/A/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SCRCArgumentHolder : NSObject {

	char _required;
	NSString* _option;
	NSString* _argument;
	NSString* _argumentDescription;
	id _target;
	SEL _action;

}

@property (nonatomic,copy,readonly) NSString * option;                           //@synthesize option=_option - In the implementation block
@property (nonatomic,copy) NSString * argument;                                  //@synthesize argument=_argument - In the implementation block
@property (nonatomic,copy,readonly) NSString * argumentDescription;              //@synthesize argumentDescription=_argumentDescription - In the implementation block
@property (nonatomic,__weak,readonly) id target;                                 //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                                       //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) char required;                                    //@synthesize required=_required - In the implementation block
-(char)isEqual:(id)arg1 ;
-(id)init;
-(long long)compare:(id)arg1 ;
-(id)target;
-(SEL)action;
-(NSString *)argument;
-(char)process;
-(char)required;
-(void)setArgument:(NSString *)arg1 ;
-(NSString *)option;
-(id)initWithArgument:(id)arg1 option:(id)arg2 description:(id)arg3 target:(id)arg4 action:(SEL)arg5 required:(char)arg6 ;
-(NSString *)argumentDescription;
@end

