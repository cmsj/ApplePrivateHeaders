/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/Versions/A/VoiceShortcutClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WFWorkflowQuery : NSObject <NSSecureCoding> {

	char _includeTombstonesAndConflicts;
	unsigned long long _location;
	NSString* _workflowType;
	NSString* _folderIdentifier;
	long long _resultsLimit;

}

@property (nonatomic,readonly) unsigned long long location;                   //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSString * workflowType;                       //@synthesize workflowType=_workflowType - In the implementation block
@property (nonatomic,readonly) NSString * folderIdentifier;                   //@synthesize folderIdentifier=_folderIdentifier - In the implementation block
@property (assign,nonatomic) long long resultsLimit;                          //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (assign,nonatomic) char includeTombstonesAndConflicts;              //@synthesize includeTombstonesAndConflicts=_includeTombstonesAndConflicts - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)location;
-(id)initWithLocation:(unsigned long long)arg1 ;
-(void)setResultsLimit:(long long)arg1 ;
-(long long)resultsLimit;
-(id)initWithCollectionIdentifier:(id)arg1 ;
-(id)initWithWorkflowType:(id)arg1 ;
-(id)initWithFolderIdentifier:(id)arg1 ;
-(NSString *)workflowType;
-(NSString *)folderIdentifier;
-(char)includeTombstonesAndConflicts;
-(void)setIncludeTombstonesAndConflicts:(char)arg1 ;
@end

