/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/Versions/A/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LPLinkMetadataStatusTransformerDelegate;
@class LPLinkMetadata, NSURL, NSAttributedString;

@interface LPLinkMetadataStatusTransformer : NSObject {

	LPLinkMetadata* _metadata;
	NSURL* _URL;
	char _wantsStatusItem;
	id<LPLinkMetadataStatusTransformerDelegate> _delegate;

}

@property (nonatomic,retain) LPLinkMetadata * metadata;                                                //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic,__weak) id<LPLinkMetadataStatusTransformerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char wantsStatusItem;                                                   //@synthesize wantsStatusItem=_wantsStatusItem - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * statusText; 
@property (nonatomic,copy,readonly) NSURL * actionURL; 
@property (nonatomic,copy,readonly) NSURL * canonicalURL; 
-(void)dealloc;
-(id<LPLinkMetadataStatusTransformerDelegate>)delegate;
-(void)setDelegate:(id<LPLinkMetadataStatusTransformerDelegate>)arg1 ;
-(id)originalURL;
-(NSAttributedString *)statusText;
-(LPLinkMetadata *)metadata;
-(void)setMetadata:(LPLinkMetadata *)arg1 ;
-(NSURL *)actionURL;
-(NSURL *)canonicalURL;
-(char)wantsStatusItem;
-(id)initWithMetadata:(id)arg1 URL:(id)arg2 ;
@end

