/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
#import <Navigation/Navigation-Structs.h>
@class NSObject, NSArray, NSData, NSString, NSDictionary;

@interface MNTrace : NSObject {

	sqlite3Ref _db;
	NSObject*<OS_dispatch_queue> _writeQueue;
	NSObject*<OS_dispatch_group> _writeGroup;
	NSArray* _bookmarks;
	NSArray* _bookmarkImages;
	unsigned long long _version;
	unsigned long long _originalVersion;
	char _isSimulation;
	char _isRouteGenius;
	char _usesCLMapCorrection;
	double _initialCourse;
	NSArray* _locations;
	NSArray* _directions;
	NSArray* _etaUpdates;
	NSArray* _headingData;
	NSArray* _motionData;
	NSArray* _vehicleHeadingData;
	NSArray* _vehicleSpeedData;
	NSData* _startWaypointData;
	NSData* _endWaypointData;
	NSArray* _routeSelections;
	NSArray* _annotatedUserBehavior;
	NSArray* _annotatedUserEnvironments;
	NSArray* _commuteDestinations;
	NSArray* _commuteDirectionsRequests;
	char _copyToCrashReporter;
	int _mainTransportType;
	NSString* _tracePath;
	NSDictionary* _miscInfo;
	NSArray* _navigationEvents;

}

@property (nonatomic,readonly) sqlite3Ref db;                                        //@synthesize db=_db - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> writeQueue;              //@synthesize writeQueue=_writeQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> writeGroup;              //@synthesize writeGroup=_writeGroup - In the implementation block
@property (assign,nonatomic) unsigned long long version;                             //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned long long originalVersion;                     //@synthesize originalVersion=_originalVersion - In the implementation block
@property (assign,nonatomic) char isSimulation;                                      //@synthesize isSimulation=_isSimulation - In the implementation block
@property (assign,nonatomic) char isRouteGenius;                                     //@synthesize isRouteGenius=_isRouteGenius - In the implementation block
@property (assign,nonatomic) char usesCLMapCorrection;                               //@synthesize usesCLMapCorrection=_usesCLMapCorrection - In the implementation block
@property (assign,nonatomic) double initialCourse;                                   //@synthesize initialCourse=_initialCourse - In the implementation block
@property (nonatomic,retain) NSArray * locations;                                    //@synthesize locations=_locations - In the implementation block
@property (nonatomic,retain) NSArray * directions;                                   //@synthesize directions=_directions - In the implementation block
@property (nonatomic,retain) NSArray * etaUpdates;                                   //@synthesize etaUpdates=_etaUpdates - In the implementation block
@property (nonatomic,retain) NSArray * headingData;                                  //@synthesize headingData=_headingData - In the implementation block
@property (nonatomic,retain) NSArray * motionData;                                   //@synthesize motionData=_motionData - In the implementation block
@property (nonatomic,retain) NSArray * vehicleHeadingData;                           //@synthesize vehicleHeadingData=_vehicleHeadingData - In the implementation block
@property (nonatomic,retain) NSArray * vehicleSpeedData;                             //@synthesize vehicleSpeedData=_vehicleSpeedData - In the implementation block
@property (nonatomic,retain) NSData * startWaypointData;                             //@synthesize startWaypointData=_startWaypointData - In the implementation block
@property (nonatomic,retain) NSData * endWaypointData;                               //@synthesize endWaypointData=_endWaypointData - In the implementation block
@property (nonatomic,retain) NSArray * routeSelections;                              //@synthesize routeSelections=_routeSelections - In the implementation block
@property (nonatomic,retain) NSArray * navigationEvents;                             //@synthesize navigationEvents=_navigationEvents - In the implementation block
@property (nonatomic,retain) NSArray * annotatedUserBehavior;                        //@synthesize annotatedUserBehavior=_annotatedUserBehavior - In the implementation block
@property (nonatomic,retain) NSArray * annotatedUserEnvironments;                    //@synthesize annotatedUserEnvironments=_annotatedUserEnvironments - In the implementation block
@property (nonatomic,retain) NSArray * bookmarks;                                    //@synthesize bookmarks=_bookmarks - In the implementation block
@property (nonatomic,retain) NSArray * bookmarkImages;                               //@synthesize bookmarkImages=_bookmarkImages - In the implementation block
@property (nonatomic,retain) NSArray * commuteDestinations;                          //@synthesize commuteDestinations=_commuteDestinations - In the implementation block
@property (nonatomic,retain) NSArray * commuteDirectionsRequests;                    //@synthesize commuteDirectionsRequests=_commuteDirectionsRequests - In the implementation block
@property (nonatomic,retain) NSDictionary * miscInfo;                                //@synthesize miscInfo=_miscInfo - In the implementation block
@property (nonatomic,readonly) NSString * tracePath;                                 //@synthesize tracePath=_tracePath - In the implementation block
@property (assign,nonatomic) char copyToCrashReporter;                               //@synthesize copyToCrashReporter=_copyToCrashReporter - In the implementation block
@property (nonatomic,readonly) int mainTransportType;                                //@synthesize mainTransportType=_mainTransportType - In the implementation block
-(void)dealloc;
-(id)init;
-(unsigned long long)version;
-(NSString *)tracePath;
-(void)setVersion:(unsigned long long)arg1 ;
-(sqlite3Ref)db;
-(NSArray *)bookmarks;
-(NSArray *)locations;
-(void)setLocations:(NSArray *)arg1 ;
-(int)mainTransportType;
-(NSArray *)directions;
-(char)isSimulation;
-(void)setIsSimulation:(char)arg1 ;
-(char)usesCLMapCorrection;
-(NSObject*<OS_dispatch_queue>)writeQueue;
-(void)setBookmarks:(NSArray *)arg1 ;
-(char)createTempTraceForRecording;
-(char)startWritingTraceToPath:(id)arg1 ;
-(NSObject*<OS_dispatch_group>)writeGroup;
-(char)copyToCrashReporter;
-(void)setCopyToCrashReporter:(char)arg1 ;
-(char)openTrace:(id)arg1 outError:(id*)arg2 ;
-(char)closeTrace;
-(char)startWritingTraceToFile:(id)arg1 ;
-(void)copyTraceToCrashReporter;
-(id)serializableBookmarks;
-(NSDictionary *)miscInfo;
-(unsigned long long)originalVersion;
-(id)_handleOpenErrorWithPath:(id)arg1 ;
-(NSArray *)bookmarkImages;
-(void)setOriginalVersion:(unsigned long long)arg1 ;
-(char)isRouteGenius;
-(void)setIsRouteGenius:(char)arg1 ;
-(void)setUsesCLMapCorrection:(char)arg1 ;
-(double)initialCourse;
-(void)setInitialCourse:(double)arg1 ;
-(void)setDirections:(NSArray *)arg1 ;
-(NSArray *)etaUpdates;
-(void)setEtaUpdates:(NSArray *)arg1 ;
-(NSArray *)headingData;
-(void)setHeadingData:(NSArray *)arg1 ;
-(NSArray *)motionData;
-(void)setMotionData:(NSArray *)arg1 ;
-(NSArray *)vehicleHeadingData;
-(void)setVehicleHeadingData:(NSArray *)arg1 ;
-(NSArray *)vehicleSpeedData;
-(void)setVehicleSpeedData:(NSArray *)arg1 ;
-(NSData *)startWaypointData;
-(void)setStartWaypointData:(NSData *)arg1 ;
-(NSData *)endWaypointData;
-(void)setEndWaypointData:(NSData *)arg1 ;
-(NSArray *)routeSelections;
-(void)setRouteSelections:(NSArray *)arg1 ;
-(NSArray *)annotatedUserBehavior;
-(void)setAnnotatedUserBehavior:(NSArray *)arg1 ;
-(NSArray *)annotatedUserEnvironments;
-(void)setAnnotatedUserEnvironments:(NSArray *)arg1 ;
-(NSArray *)commuteDestinations;
-(void)setCommuteDestinations:(NSArray *)arg1 ;
-(NSArray *)commuteDirectionsRequests;
-(void)setCommuteDirectionsRequests:(NSArray *)arg1 ;
-(void)setMiscInfo:(NSDictionary *)arg1 ;
-(NSArray *)navigationEvents;
-(void)setNavigationEvents:(NSArray *)arg1 ;
-(void)setBookmarkImages:(NSArray *)arg1 ;
@end
