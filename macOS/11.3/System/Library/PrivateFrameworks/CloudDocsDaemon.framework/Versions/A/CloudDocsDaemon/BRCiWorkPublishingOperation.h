/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCItemID, NSArray, NSNumber, BRCServerZone, NSString;

@interface BRCiWorkPublishingOperation : _BRCOperation <BRCOperationSubclass> {

	BRCItemID* _itemID;
	NSArray* _recordIDs;
	char _forPublish;
	char _readonly;
	NSNumber* _sharingInfo;
	BRCServerZone* _serverZone;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(char)shouldRetryForError:(id)arg1 ;
-(id)createActivity;
-(id)initWithDocumentItem:(id)arg1 forPublish:(char)arg2 readonly:(char)arg3 ;
-(void)_updateItemAfterShareCompleted;
@end

