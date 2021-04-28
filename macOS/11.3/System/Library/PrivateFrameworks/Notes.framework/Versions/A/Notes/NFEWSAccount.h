/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/NFAccount.h>

@class NFEWSFolder, NSURL, NSString;

@interface NFEWSAccount : NFAccount

@property (nonatomic,retain) NFEWSFolder * rootFolder; 
@property (nonatomic,__weak,readonly) NFEWSFolder * defaultFolder; 
@property (nonatomic,retain) NSURL * externalURL; 
@property (nonatomic,retain) NSURL * internalURL; 
@property (nonatomic,retain) NSURL * lastUsedAutodiscoverURL; 
@property (nonatomic,copy) NSString * folderHierarchySyncState; 
+(id)accountWithEmailAddress:(id)arg1 context:(id)arg2 ;
+(id)accountWithRootFolderID:(id)arg1 context:(id)arg2 ;
+(id)accountWithUsername:(id)arg1 internalURL:(id)arg2 context:(id)arg3 ;
+(id)createAccountWithEmailAddress:(id)arg1 context:(id)arg2 ;
-(NSURL *)externalURL;
-(NSURL *)internalURL;
-(NSURL *)lastUsedAutodiscoverURL;
-(NFEWSFolder *)defaultFolder;
-(char)participatesInInternetAccounts;
-(long long)accountClassPriority;
-(id)folderEntityName;
-(id)createDefaultFolderInContext:(id)arg1 ;
-(char)validateRootFolder:(inout id*)arg1 error:(out id*)arg2 ;
@end
