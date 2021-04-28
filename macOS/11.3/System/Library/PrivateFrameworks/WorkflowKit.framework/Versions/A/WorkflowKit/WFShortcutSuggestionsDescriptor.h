/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcutClient/WFDatabaseObjectDescriptor.h>

@class NSArray;

@interface WFShortcutSuggestionsDescriptor : WFDatabaseObjectDescriptor {

	NSArray* _suggestions;
	unsigned long long _availability;

}

@property (nonatomic,readonly) NSArray * suggestions;                        //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,readonly) unsigned long long availability;              //@synthesize availability=_availability - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)suggestions;
-(unsigned long long)availability;
-(id)initWithIdentifier:(id)arg1 suggestions:(id)arg2 availability:(unsigned long long)arg3 ;
@end
