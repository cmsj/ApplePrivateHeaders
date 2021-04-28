/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, ICIAMImpressionNode;

@interface ICIAMMetricEvent : PBCodable <NSCopying> {

	NSMutableArray* _actionDetails;
	int _actionType;
	NSString* _actionURL;
	NSString* _eventType;
	ICIAMImpressionNode* _impression;
	NSString* _impressionType;
	NSMutableArray* _pageDetails;
	NSString* _pageId;
	int _pageType;
	NSString* _pageUrl;
	NSString* _targetId;
	int _targetType;
	SCD_Struct_IC16 _has;

}

@property (nonatomic,readonly) char hasPageId; 
@property (nonatomic,retain) NSString * pageId;                             //@synthesize pageId=_pageId - In the implementation block
@property (assign,nonatomic) char hasPageType; 
@property (assign,nonatomic) int pageType;                                  //@synthesize pageType=_pageType - In the implementation block
@property (nonatomic,retain) NSMutableArray * pageDetails;                  //@synthesize pageDetails=_pageDetails - In the implementation block
@property (nonatomic,readonly) char hasTargetId; 
@property (nonatomic,retain) NSString * targetId;                           //@synthesize targetId=_targetId - In the implementation block
@property (assign,nonatomic) char hasTargetType; 
@property (assign,nonatomic) int targetType;                                //@synthesize targetType=_targetType - In the implementation block
@property (assign,nonatomic) char hasActionType; 
@property (assign,nonatomic) int actionType;                                //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,readonly) char hasActionURL; 
@property (nonatomic,retain) NSString * actionURL;                          //@synthesize actionURL=_actionURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * actionDetails;                //@synthesize actionDetails=_actionDetails - In the implementation block
@property (nonatomic,readonly) char hasEventType; 
@property (nonatomic,retain) NSString * eventType;                          //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) char hasPageUrl; 
@property (nonatomic,retain) NSString * pageUrl;                            //@synthesize pageUrl=_pageUrl - In the implementation block
@property (nonatomic,readonly) char hasImpressionType; 
@property (nonatomic,retain) NSString * impressionType;                     //@synthesize impressionType=_impressionType - In the implementation block
@property (nonatomic,readonly) char hasImpression; 
@property (nonatomic,retain) ICIAMImpressionNode * impression;              //@synthesize impression=_impression - In the implementation block
+(Class)pageDetailsType;
+(Class)actionDetailsType;
-(id)reportableDictionary;
-(id)reportableDictionaryForClickEventWithMessageIdentifier:(id)arg1 andTargetIdentifier:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)eventType;
-(void)setEventType:(NSString *)arg1 ;
-(void)setActionType:(int)arg1 ;
-(int)actionType;
-(void)setHasActionType:(char)arg1 ;
-(char)hasActionType;
-(id)actionTypeAsString:(int)arg1 ;
-(int)StringAsActionType:(id)arg1 ;
-(char)hasEventType;
-(void)setTargetId:(NSString *)arg1 ;
-(NSString *)targetId;
-(char)hasTargetId;
-(NSString *)actionURL;
-(char)hasImpressionType;
-(NSString *)impressionType;
-(void)setImpressionType:(NSString *)arg1 ;
-(int)targetType;
-(char)hasPageId;
-(int)pageType;
-(void)setPageType:(int)arg1 ;
-(void)setHasPageType:(char)arg1 ;
-(char)hasPageType;
-(id)pageTypeAsString:(int)arg1 ;
-(int)StringAsPageType:(id)arg1 ;
-(void)clearPageDetails;
-(void)addPageDetails:(id)arg1 ;
-(unsigned long long)pageDetailsCount;
-(id)pageDetailsAtIndex:(unsigned long long)arg1 ;
-(void)setTargetType:(int)arg1 ;
-(void)setHasTargetType:(char)arg1 ;
-(char)hasTargetType;
-(id)targetTypeAsString:(int)arg1 ;
-(int)StringAsTargetType:(id)arg1 ;
-(char)hasActionURL;
-(void)clearActionDetails;
-(void)addActionDetails:(id)arg1 ;
-(unsigned long long)actionDetailsCount;
-(id)actionDetailsAtIndex:(unsigned long long)arg1 ;
-(char)hasPageUrl;
-(char)hasImpression;
-(NSString *)pageId;
-(void)setPageId:(NSString *)arg1 ;
-(NSMutableArray *)pageDetails;
-(void)setPageDetails:(NSMutableArray *)arg1 ;
-(void)setActionURL:(NSString *)arg1 ;
-(NSMutableArray *)actionDetails;
-(void)setActionDetails:(NSMutableArray *)arg1 ;
-(NSString *)pageUrl;
-(void)setPageUrl:(NSString *)arg1 ;
-(ICIAMImpressionNode *)impression;
-(void)setImpression:(ICIAMImpressionNode *)arg1 ;
@end
