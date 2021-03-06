/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/Versions/A/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSManagedObjectID, NSManagedObjectContext;

@interface ICIndexHandwritingOperation : NSOperation {

	NSManagedObjectID* _attachmentObjectID;
	NSManagedObjectContext* _context;

}

@property (nonatomic,retain) NSManagedObjectID * attachmentObjectID;              //@synthesize attachmentObjectID=_attachmentObjectID - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * context;                    //@synthesize context=_context - In the implementation block
+(id)sharedOperationQueue;
-(void)main;
-(NSManagedObjectContext *)context;
-(void)setContext:(NSManagedObjectContext *)arg1 ;
-(void)setAttachmentObjectID:(NSManagedObjectID *)arg1 ;
-(NSManagedObjectID *)attachmentObjectID;
-(id)initWithAttachmentObjectID:(id)arg1 context:(id)arg2 ;
@end

