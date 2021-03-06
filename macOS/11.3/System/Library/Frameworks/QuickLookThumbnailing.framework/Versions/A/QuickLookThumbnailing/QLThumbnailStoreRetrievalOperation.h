/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/Versions/A/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_os_activity, QLThumbnailGenerationRequestNSXPCProxyCreating;
@class NSURL, NSError, NSObject, QLThumbnailAddition, NSDictionary, NSData, GSAddition;

@interface QLThumbnailStoreRetrievalOperation : NSOperation {

	NSURL* _documentURL;
	NSError* _error;
	char _finished;
	char _executing;
	char _allowsThumbnailGeneration;
	char _generateThumbnailsAtBackgroundPriority;
	char _thumbnailWasJustAutomaticallyGenerated;
	NSObject*<OS_os_activity> _retrievalActivity;
	NSObject*<OS_os_activity> _generationActivity;
	QLThumbnailAddition* _addition;
	id<QLThumbnailGenerationRequest><NSXPCProxyCreating> _thumbnailRequest;
	NSURL* _destinationURL;

}

@property (retain) NSError * error;                                                                    //@synthesize error=_error - In the implementation block
@property (assign,getter=isExecuting,nonatomic) char executing;                                        //@synthesize executing=_executing - In the implementation block
@property (assign,getter=isFinished,nonatomic) char finished;                                          //@synthesize finished=_finished - In the implementation block
@property (retain) id<QLThumbnailGenerationRequest><NSXPCProxyCreating> thumbnailRequest;              //@synthesize thumbnailRequest=_thumbnailRequest - In the implementation block
@property (retain) NSURL * documentURL;                                                                //@synthesize documentURL=_documentURL - In the implementation block
@property (retain) NSURL * destinationURL;                                                             //@synthesize destinationURL=_destinationURL - In the implementation block
@property (assign) char allowsThumbnailGeneration;                                                     //@synthesize allowsThumbnailGeneration=_allowsThumbnailGeneration - In the implementation block
@property (assign) char generateThumbnailsAtBackgroundPriority;                                        //@synthesize generateThumbnailsAtBackgroundPriority=_generateThumbnailsAtBackgroundPriority - In the implementation block
@property (readonly) NSDictionary * thumbnailImagesDictionary; 
@property (readonly) NSData * serializedQuickLookMetadataDictionary; 
@property (readonly) char thumbnailWasAutomaticallyGenerated; 
@property (readonly) GSAddition * genStoreAddition; 
@property (readonly) char thumbnailWasJustAutomaticallyGenerated;                                      //@synthesize thumbnailWasJustAutomaticallyGenerated=_thumbnailWasJustAutomaticallyGenerated - In the implementation block
@property (readonly) QLThumbnailAddition * addition;                                                   //@synthesize addition=_addition - In the implementation block
+(char)canMostRecentClientsGenerateThumbnailsForUTI:(id)arg1 ;
-(id)description;
-(id)init;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)start;
-(void)cancel;
-(void)main;
-(void)setFinished:(char)arg1 ;
-(char)isFinished;
-(char)isExecuting;
-(char)isConcurrent;
-(NSURL *)documentURL;
-(void)setDocumentURL:(NSURL *)arg1 ;
-(void)setExecuting:(char)arg1 ;
-(NSURL *)destinationURL;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(void)_finishWithError:(id)arg1 ;
-(char)_finishIfNeeded;
-(void)_finishBecauseGenerationFailedWithUnderlyingError:(id)arg1 ;
-(void)setThumbnailRequest:(id<QLThumbnailGenerationRequest><NSXPCProxyCreating>)arg1 ;
-(void)_afterThumbnailIsGenerated;
-(void)_generateThumbnail;
-(void)_afterDeterminingWhetherWeCanGenerate:(char)arg1 ;
-(void)afterThumbnailIsPutInGenstore;
-(GSAddition *)genStoreAddition;
-(id)initWithDocumentAtURL:(id)arg1 ;
-(NSDictionary *)thumbnailImagesDictionary;
-(NSData *)serializedQuickLookMetadataDictionary;
-(char)thumbnailWasAutomaticallyGenerated;
-(char)allowsThumbnailGeneration;
-(void)setAllowsThumbnailGeneration:(char)arg1 ;
-(char)generateThumbnailsAtBackgroundPriority;
-(void)setGenerateThumbnailsAtBackgroundPriority:(char)arg1 ;
-(char)thumbnailWasJustAutomaticallyGenerated;
-(QLThumbnailAddition *)addition;
-(id<QLThumbnailGenerationRequest><NSXPCProxyCreating>)thumbnailRequest;
@end

