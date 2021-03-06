/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PGGraphRelatableEvent <PGGraphFullMeaninglessEvent>
@required
+(id)pathFromMoment;
+(id)pathToMoment;
+(id)pathFromTargetNodeDomain:(unsigned short)arg1;
+(id)pathToTargetNodeDomain:(unsigned short)arg1;
+(id)inclusivePathFromTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2;
+(id)inclusivePathToTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2;
-(double)weightForMoment:(id)arg1;
-(id)photoEvent;
-(id)connectedEventsWithTargetDomain:(unsigned short)arg1;
-(id)keywordsForRelatedType:(unsigned long long)arg1 focusOnNodes:(id)arg2;

@end

