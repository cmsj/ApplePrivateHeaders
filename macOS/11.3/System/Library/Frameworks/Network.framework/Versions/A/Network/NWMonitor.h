/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Network.framework/Versions/A/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class NWNetworkDescription, NSArray, NWEndpoint, NWParameters, NWPathEvaluator, NSUUID, NSURL, NWInterface, NSString;

@interface NWMonitor : NSObject <NSURLSessionTaskDelegate> {

	unsigned _mID;
	long long _status;
	NWNetworkDescription* _bestAvailableNetworkDescription;
	NSArray* _networkDescriptionArray;
	NWEndpoint* _endpoint;
	NWParameters* _parameters;
	NWPathEvaluator* _pathEvaluator;
	NSUUID* _lastProbeUUID;
	NSURL* _lastProbeURL;
	NWInterface* _interface;

}

@property (assign) long long status;                                                    //@synthesize status=_status - In the implementation block
@property (retain) NWNetworkDescription * bestAvailableNetworkDescription;              //@synthesize bestAvailableNetworkDescription=_bestAvailableNetworkDescription - In the implementation block
@property (retain) NSArray * networkDescriptionArray;                                   //@synthesize networkDescriptionArray=_networkDescriptionArray - In the implementation block
@property (retain) NWParameters * parameters;                                           //@synthesize parameters=_parameters - In the implementation block
@property (retain) NWEndpoint * endpoint;                                               //@synthesize endpoint=_endpoint - In the implementation block
@property (retain) NWPathEvaluator * pathEvaluator;                                     //@synthesize pathEvaluator=_pathEvaluator - In the implementation block
@property (retain) NSUUID * lastProbeUUID;                                              //@synthesize lastProbeUUID=_lastProbeUUID - In the implementation block
@property (retain) NSURL * lastProbeURL;                                                //@synthesize lastProbeURL=_lastProbeURL - In the implementation block
@property (retain) NWInterface * interface;                                             //@synthesize interface=_interface - In the implementation block
@property (assign) unsigned mID;                                                        //@synthesize mID=_mID - In the implementation block
@property (nonatomic,readonly) NSString * privateDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)copySavedMonitorForNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3 ;
+(void)saveMonitor:(id)arg1 ;
+(void)initialize;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)queue;
+(id)mainOperationQueue;
+(id)monitorWithNetworkDescription:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3 ;
+(id)monitorWithNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3 ;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(char)arg2 ;
-(void)setBestAvailableNetworkDescription:(NWNetworkDescription *)arg1 ;
-(void)setNetworkDescriptionArray:(NSArray *)arg1 ;
-(void)evaluateStartingAtIndex:(unsigned long long)arg1 probeUUID:(id)arg2 probeWasSuccessful:(char)arg3 ;
-(char)matchesNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3 ;
-(NSUUID *)lastProbeUUID;
-(void)setLastProbeUUID:(NSUUID *)arg1 ;
-(NSURL *)lastProbeURL;
-(void)setLastProbeURL:(NSURL *)arg1 ;
-(unsigned)mID;
-(void)setMID:(unsigned)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(long long)status;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NWEndpoint *)endpoint;
-(void)setEndpoint:(NWEndpoint *)arg1 ;
-(NWParameters *)parameters;
-(void)setParameters:(NWParameters *)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(NWInterface *)interface;
-(NWPathEvaluator *)pathEvaluator;
-(void)setStatus:(long long)arg1 ;
-(void)setInterface:(NWInterface *)arg1 ;
-(void)setPathEvaluator:(NWPathEvaluator *)arg1 ;
-(NSString *)privateDescription;
-(NWNetworkDescription *)bestAvailableNetworkDescription;
-(NSArray *)networkDescriptionArray;
@end

