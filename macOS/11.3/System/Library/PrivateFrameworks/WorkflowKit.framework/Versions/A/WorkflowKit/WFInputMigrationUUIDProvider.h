/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFUUIDProvider.h>

@class WFAction, NSString;

@interface WFInputMigrationUUIDProvider : NSObject <WFUUIDProvider> {

	WFAction* _action;
	unsigned long long _position;

}

@property (nonatomic,readonly) WFAction * action;                        //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) unsigned long long position;              //@synthesize position=_position - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFAction *)action;
-(unsigned long long)position;
-(id)generateOutputUUIDForAction:(id)arg1 ;
-(id)initWithAction:(id)arg1 atPosition:(unsigned long long)arg2 ;
@end

