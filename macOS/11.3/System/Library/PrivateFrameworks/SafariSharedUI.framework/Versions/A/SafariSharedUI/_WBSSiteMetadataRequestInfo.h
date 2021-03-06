/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSSiteMetadataProvider;
@class NSMutableSet, NSOperation;

@interface _WBSSiteMetadataRequestInfo : NSObject {

	id<WBSSiteMetadataProvider> _provider;
	NSMutableSet* _tokens;
	NSOperation* _operation;

}

@property (nonatomic,readonly) id<WBSSiteMetadataProvider> provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) NSMutableSet * tokens;                             //@synthesize tokens=_tokens - In the implementation block
@property (assign,nonatomic,__weak) NSOperation * operation;                      //@synthesize operation=_operation - In the implementation block
-(void)dealloc;
-(id)initWithProvider:(id)arg1 ;
-(NSOperation *)operation;
-(void)setOperation:(NSOperation *)arg1 ;
-(id<WBSSiteMetadataProvider>)provider;
-(NSMutableSet *)tokens;
@end

