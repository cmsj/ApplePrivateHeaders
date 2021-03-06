/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StorageManagement.framework/Versions/A/StorageManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StorageManagement/STMOperation.h>

@protocol NSCopying;
@class STMOpaqueExtension, NSArray;

@interface STMExtensionOperation : STMOperation {

	STMOpaqueExtension* _extension;
	NSArray* _inputItems;
	NSArray* _returnedItems;
	id<NSCopying> _requestIdentifier;

}

@property (copy) NSArray * returnedItems;                                 //@synthesize returnedItems=_returnedItems - In the implementation block
@property (copy) id<NSCopying> requestIdentifier;                         //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allInputItems; 
@property (retain) STMOpaqueExtension * extension;                        //@synthesize extension=_extension - In the implementation block
@property (copy) NSArray * inputItems;                                    //@synthesize inputItems=_inputItems - In the implementation block
+(id)commandName;
+(id)resultsByRequestIdentifier;
+(void)requestWithIdentifier:(id)arg1 didCancelWithError:(id)arg2 ;
+(void)requestWithIdentifier:(id)arg1 didCompleteWithItems:(id)arg2 ;
+(void)requestWithIdentifierWasInterrupted:(id)arg1 ;
-(void)main;
-(NSArray *)inputItems;
-(void)setInputItems:(NSArray *)arg1 ;
-(STMOpaqueExtension *)extension;
-(void)setExtension:(STMOpaqueExtension *)arg1 ;
-(id<NSCopying>)requestIdentifier;
-(void)requestDidComplete:(id)arg1 ;
-(void)setRequestIdentifier:(id<NSCopying>)arg1 ;
-(NSArray *)allInputItems;
-(void)requestDidFailToBeginWithError:(id)arg1 ;
-(char)tryFinishWithRequestIdentifier:(id)arg1 ;
-(void)requestDidBeginWithRequestIdentifier:(id)arg1 ;
-(void)finishWithItems:(id)arg1 ;
-(id)commandInputItem;
-(void)setReturnedItems:(NSArray *)arg1 ;
-(void)requestDidCancel:(id)arg1 ;
-(void)requestWasInterrupted:(id)arg1 ;
-(NSArray *)returnedItems;
@end

