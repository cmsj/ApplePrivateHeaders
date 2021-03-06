/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCTopicalNode;

@interface FCTopicalEdge : NSObject {

	char _relatednessCalculated;
	FCTopicalNode* _a;
	FCTopicalNode* _b;
	unsigned long long _containsAButNotB;
	unsigned long long _containsAAndB;
	unsigned long long _containsBButNotA;

}

@property (a,nonatomic,retain) FCTopicalNode * a;                     //@synthesize a=_a - In the implementation block
@property (b,nonatomic,retain) FCTopicalNode * b;                     //@synthesize b=_b - In the implementation block
@property (assign,nonatomic) char relatednessCalculated;              //@synthesize relatednessCalculated=_relatednessCalculated - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setA:(FCTopicalNode *)arg1 ;
-(void)setB:(FCTopicalNode *)arg1 ;
-(char)relatednessCalculated;
-(void)setRelatednessCalculated:(char)arg1 ;
@end

