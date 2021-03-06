/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/Versions/A/SoftwareUpdateCoreSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SUCoreFSMAttachedAction : NSObject {

	NSString* _fsmAction;
	id _actionDelegate;
	Class _eventInfoClass;

}

@property (nonatomic,retain,readonly) NSString * fsmAction;              //@synthesize fsmAction=_fsmAction - In the implementation block
@property (nonatomic,__weak,readonly) id actionDelegate;                 //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (nonatomic,retain,readonly) Class eventInfoClass;              //@synthesize eventInfoClass=_eventInfoClass - In the implementation block
-(NSString *)fsmAction;
-(Class)eventInfoClass;
-(id)initWithAction:(id)arg1 usingDelegate:(id)arg2 withInfoClass:(Class)arg3 ;
-(id)description;
-(id)actionDelegate;
@end

