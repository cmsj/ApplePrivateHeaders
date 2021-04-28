/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/Versions/A/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HMBModelFieldOption.h>

@interface HMBModelFieldOptionQueryable : HMBModelFieldOption {

	/*^block*/id _encodingBlock;
	/*^block*/id _decodingBlock;
	/*^block*/id _descriptionBlock;

}

@property (nonatomic,copy) id encodingBlock;                 //@synthesize encodingBlock=_encodingBlock - In the implementation block
@property (nonatomic,copy) id decodingBlock;                 //@synthesize decodingBlock=_decodingBlock - In the implementation block
@property (nonatomic,copy) id descriptionBlock;              //@synthesize descriptionBlock=_descriptionBlock - In the implementation block
-(void)applyTo:(id)arg1 ;
-(id)descriptionBlock;
-(void)setDescriptionBlock:(id)arg1 ;
-(id)encodingBlock;
-(id)decodingBlock;
-(id)initWithEncodingBlock:(/*^block*/id)arg1 decodingBlock:(/*^block*/id)arg2 descriptionBlock:(/*^block*/id)arg3 ;
-(void)setEncodingBlock:(id)arg1 ;
-(void)setDecodingBlock:(id)arg1 ;
@end
