/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSPersistence.TSPReferenceMap : NSObject {

	 referenceMap;

}

@property (readonly,nonatomic) long long count; 
@property (readonly,nonatomic) long long hash; 
-(char)isEqual:(id)arg1 ;
-(long long)hash;
-(id)init;
-(long long)count;
-(id)allReferencesFromIdentifier:(long long)arg1 ;
-(void)enumerateReferencesUsingBlock:(/*^block*/id)arg1 ;
-(id)makeMutableReferenceMap;
@end
