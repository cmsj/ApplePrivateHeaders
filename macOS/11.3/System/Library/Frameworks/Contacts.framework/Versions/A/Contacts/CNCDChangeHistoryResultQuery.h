/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNTask.h>

@class CNCDChangeHistoryClient, CNChangeHistoryAnchor, NSManagedObjectContext;

@interface CNCDChangeHistoryResultQuery : CNTask {

	char _shouldUnifyResults;
	char _includeGroupChanges;
	CNCDChangeHistoryClient* _client;
	CNChangeHistoryAnchor* _startingAnchor;
	NSManagedObjectContext* _context;

}

@property (nonatomic,readonly) CNCDChangeHistoryClient * client;                    //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) char shouldUnifyResults;                             //@synthesize shouldUnifyResults=_shouldUnifyResults - In the implementation block
@property (nonatomic,readonly) char includeGroupChanges;                            //@synthesize includeGroupChanges=_includeGroupChanges - In the implementation block
@property (nonatomic,readonly) CNChangeHistoryAnchor * startingAnchor;              //@synthesize startingAnchor=_startingAnchor - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * context;                    //@synthesize context=_context - In the implementation block
+(id)os_log;
+(id)taskForClient:(id)arg1 shouldUnifyResults:(char)arg2 includeGroupChanges:(char)arg3 startingAnchor:(id)arg4 context:(id)arg5 ;
+(id)deltaSyncValidationTaskWithClient:(id)arg1 anchor:(id)arg2 context:(id)arg3 ;
+(id)deltaSyncTaskWithClient:(id)arg1 shouldUnifyResults:(char)arg2 includeGroupChanges:(char)arg3 startingAnchor:(id)arg4 context:(id)arg5 ;
+(id)fullSyncTaskWithClient:(id)arg1 shouldUnifyResults:(char)arg2 includeGroupChanges:(char)arg3 startingAnchor:(id)arg4 context:(id)arg5 ;
+(char)isAnchorValid:(id)arg1 context:(id)arg2 ;
+(id)currentHistoryAnchorInContext:(id)arg1 error:(id*)arg2 ;
+(id)changeHistoryResultForClient:(id)arg1 shouldUnifyResults:(char)arg2 includeGroupChanges:(char)arg3 sinceAnchor:(id)arg4 context:(id)arg5 error:(id*)arg6 ;
-(NSManagedObjectContext *)context;
-(CNCDChangeHistoryClient *)client;
-(id)run:(id*)arg1 ;
-(char)shouldUnifyResults;
-(char)includeGroupChanges;
-(id)initWithClient:(id)arg1 shouldUnifyResults:(char)arg2 includeGroupChanges:(char)arg3 startingAnchor:(id)arg4 context:(id)arg5 ;
-(id)transactions:(id*)arg1 ;
-(void)configureResult:(id)arg1 forTransactions:(id)arg2 ;
-(void)didRun;
-(id)lastTokenForClient;
-(id)requestForToken:(id)arg1 ;
-(CNChangeHistoryAnchor *)startingAnchor;
@end

