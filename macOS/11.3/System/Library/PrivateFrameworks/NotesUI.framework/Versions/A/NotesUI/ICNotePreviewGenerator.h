/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/Versions/A/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesUI/NotesUI-Structs.h>
@class NSOperationQueue, NSManagedObjectContext;

@interface ICNotePreviewGenerator : NSObject {

	char _suspended;
	NSOperationQueue* _operationQueue;
	NSManagedObjectContext* _workerContext;

}

@property (nonatomic,retain) NSOperationQueue * operationQueue;                   //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * workerContext;              //@synthesize workerContext=_workerContext - In the implementation block
@property (assign,getter=isSuspended,nonatomic) char suspended;                   //@synthesize suspended=_suspended - In the implementation block
+(id)sharedGenerator;
-(id)init;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setSuspended:(char)arg1 ;
-(char)isSuspended;
-(NSManagedObjectContext *)workerContext;
-(void)setWorkerContext:(NSManagedObjectContext *)arg1 ;
-(void)fetchPreviewImageForNote:(id)arg1 minSize:(CGSize)arg2 scale:(double)arg3 cache:(id)arg4 cacheKey:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)fetchPreviewImageForNote:(id)arg1 minSize:(CGSize)arg2 scale:(double)arg3 appearanceInfo:(id)arg4 cache:(id)arg5 cacheKey:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(id)previewURLForNote:(id)arg1 ;
-(id)renderPreviewImageForNote:(id)arg1 minSize:(CGSize)arg2 scale:(double)arg3 appearanceInfo:(id)arg4 cache:(id)arg5 cacheKey:(id)arg6 ;
-(id)drawingAttachmentAtStartOfNote:(id)arg1 ;
-(void)fetchPreviewImageForNote:(id)arg1 minSize:(CGSize)arg2 scale:(double)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)previewImageForNote:(id)arg1 minSize:(CGSize)arg2 scale:(double)arg3 appearanceInfo:(id)arg4 ;
-(void)previewImageWithDrawingAttachment:(id)arg1 minSize:(CGSize)arg2 scale:(double)arg3 appearanceInfo:(id)arg4 cache:(id)arg5 cacheKey:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
@end

