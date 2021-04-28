/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPMapsPushDaemonProxy <MSPRemoteModelAccess>
@required
-(void)showParkedCarBulletinForEvent:(id)arg1;
-(void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2;
-(void)clearParkedCarBulletin;
-(void)checkin;
-(void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)arg1;
-(void)registerForTopic;
-(void)simulateProblemResolution;
-(void)fetchProblemStatus;
-(void)shouldUseDevAPNS:(/*^block*/id)arg1;
-(void)setShouldUseDevAPNS:(char)arg1;
-(void)fetchDevicePushToken:(/*^block*/id)arg1;
-(void)fetchDownloadedAnnouncements:(/*^block*/id)arg1;
-(void)fetchAnnouncementsFilePath:(/*^block*/id)arg1;
-(void)fetchAnnouncementsURLPath:(/*^block*/id)arg1;
-(void)updateAnnouncements:(/*^block*/id)arg1;
-(void)updateActiveAnnouncement;
-(void)simulateAnnouncement:(id)arg1 afterDelay:(double)arg2;
-(void)clearCurrentAnnouncement;
-(void)clearShownAnnouncements;
-(void)resetAnnouncements;
-(void)fetchCurrentAnnouncement:(/*^block*/id)arg1;
-(void)fetchShownAnnouncements:(/*^block*/id)arg1;
-(void)clearBulletinWithRecordID:(id)arg1;
-(void)problemStatusResponseWithNotificationID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeProblemStatusResponseWithNotificationID:(id)arg1;
-(void)showTrafficConditionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;
-(void)clearTrafficConditionsBulletin;
-(void)showMapsSuggestionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;
-(void)clearMapsSuggestionsBulletin;
-(void)showVenueBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;
-(void)clearVenueBulletin;
-(void)showTrafficIncidentAlertWithID:(id)arg1 withReroute:(char)arg2 title:(id)arg3 description:(id)arg4;
-(void)clearTrafficIncidentBulletinWithAlertID:(id)arg1;
-(void)clearTrafficIncidentsBulletin;
-(void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)arg1 afterDelay:(double)arg2;
-(void)clearPredictedRouteTrafficIncidentBulletin;
-(void)showLowFuelAlertBulletinForLowFuelDetails:(id)arg1;
-(void)clearLowFuelAlertBulletin;
-(void)showParkedCarBulletinForEvent:(id)arg1 afterDelay:(double)arg2;
-(void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2 afterDelay:(double)arg3;
-(oneway void)updateMapsModelBackupAttributesIfNeeded;
-(void)eraseRAPData;
-(void)handleMapsApplicationRemoval:(/*^block*/id)arg1;
-(void)fetchUserRoutingPreferencesWithCompletion:(/*^block*/id)arg1;

@end
