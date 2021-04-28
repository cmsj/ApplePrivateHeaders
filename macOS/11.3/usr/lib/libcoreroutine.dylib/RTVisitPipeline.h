/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableDictionary, NSString, RTVisit, RTVisitHyperParameter, NSDate;

@interface RTVisitPipeline : NSObject {

	NSArray* _modules;
	NSMutableDictionary* _moduleStats;
	unsigned long long _iteration;
	char _bootStrappingDone;
	NSString* _name;
	unsigned long long _type;
	RTVisit* _lastVisit;
	RTVisitHyperParameter* _hyperParameter;
	NSDate* _lastProcessedLocationDate;

}

@property (nonatomic,retain) NSDate * lastProcessedLocationDate;                    //@synthesize lastProcessedLocationDate=_lastProcessedLocationDate - In the implementation block
@property (nonatomic,readonly) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) RTVisit * lastVisit;                                 //@synthesize lastVisit=_lastVisit - In the implementation block
@property (assign,nonatomic) char bootStrappingDone;                                //@synthesize bootStrappingDone=_bootStrappingDone - In the implementation block
@property (nonatomic,readonly) RTVisitHyperParameter * hyperParameter;              //@synthesize hyperParameter=_hyperParameter - In the implementation block
+(id)typeToString:(unsigned long long)arg1 ;
-(id)description;
-(id)init;
-(NSString *)name;
-(unsigned long long)type;
-(void)shutdown;
-(RTVisitHyperParameter *)hyperParameter;
-(id)initWithModules:(id)arg1 name:(id)arg2 type:(unsigned long long)arg3 lastVisit:(id)arg4 hyperParameter:(id)arg5 ;
-(id)filterLocations:(id)arg1 ;
-(id)processVisitCluster:(id)arg1 ;
-(id)filterVisitClusters:(id)arg1 ;
-(char)isRedundantForVisit:(id)arg1 currentVisit:(id)arg2 distanceCalculator:(id)arg3 ;
-(id)processLocations:(id)arg1 ;
-(RTVisit *)lastVisit;
-(char)bootStrappingDone;
-(void)setBootStrappingDone:(char)arg1 ;
-(NSDate *)lastProcessedLocationDate;
-(void)setLastProcessedLocationDate:(NSDate *)arg1 ;
@end
