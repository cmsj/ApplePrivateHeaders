/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HelpData.framework/Versions/A/HelpData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HelpData/DDMObject.h>

@class NSURL, NSString;

@interface DDMMisc : DDMObject {

	char _darkMode;
	NSURL* _harrierBaseURL;
	NSURL* _remoteSearchIndex;
	NSURL* _remoteCSSearchIndex;
	NSURL* _remoteExactMatch;
	NSString* _buildID;

}

@property (nonatomic,readonly) NSURL * harrierBaseURL;                   //@synthesize harrierBaseURL=_harrierBaseURL - In the implementation block
@property (nonatomic,readonly) NSURL * remoteSearchIndex;                //@synthesize remoteSearchIndex=_remoteSearchIndex - In the implementation block
@property (nonatomic,readonly) NSURL * remoteCSSearchIndex;              //@synthesize remoteCSSearchIndex=_remoteCSSearchIndex - In the implementation block
@property (nonatomic,readonly) NSURL * remoteExactMatch;                 //@synthesize remoteExactMatch=_remoteExactMatch - In the implementation block
@property (readonly) NSString * buildID;                                 //@synthesize buildID=_buildID - In the implementation block
@property (readonly) char darkMode;                                      //@synthesize darkMode=_darkMode - In the implementation block
-(id)description;
-(char)darkMode;
-(NSURL *)harrierBaseURL;
-(NSURL *)remoteSearchIndex;
-(NSURL *)remoteCSSearchIndex;
-(NSURL *)remoteExactMatch;
-(NSString *)buildID;
-(void)setHarrierBaseURL:(NSURL *)arg1 ;
-(void)setRemoteSearchIndex:(NSURL *)arg1 ;
-(void)setRemoteCSSearchIndex:(NSURL *)arg1 ;
-(void)setRemoteExactMatch:(NSURL *)arg1 ;
@end

