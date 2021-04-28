/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/Versions/A/VoiceShortcutClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcutClient/VoiceShortcutClient-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface VCSleepWorkflow : NSObject <NSSecureCoding, NSCopying> {

	NSArray* _actions;
	NSString* _name;
	NSString* _summaryString;

}

@property (nonatomic,copy,readonly) NSArray * actions;                                  //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifierForDisplay; 
@property (nonatomic,readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * summaryString;                           //@synthesize summaryString=_summaryString - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)actions;
-(NSString *)summaryString;
-(id)initWithActions:(id)arg1 ;
-(NSString *)bundleIdentifierForDisplay;
@end
