#import <Foundation/Foundation.h>

#import "HockeySDKEnums.h"

#import "BITHockeyManager.h"
#import "BITHockeyManagerDelegate.h"

#import "BITHockeyAttachment.h"

#import "BITCrashManager.h"
#import "BITCrashManagerDelegate.h"
#import "BITCrashDetails.h"
#import "BITCrashMetaData.h"
#import "BITCrashExceptionApplication.h"

#import "BITSystemProfile.h"

// Notification message which HockeyManager is listening to, to retry requesting updated from the server
#define BITHockeyNetworkDidBecomeReachableNotification @"BITHockeyNetworkDidBecomeReachable"

extern NSString *const kBITDefaultUserID;
extern NSString *const kBITDefaultUserName;
extern NSString *const kBITDefaultUserEmail;

/**
 *  HockeySDK Crash Reporter error domain
 */
typedef NS_ENUM (NSInteger, BITCrashErrorReason) {
  /**
   *  Unknown error
   */
  BITCrashErrorUnknown,
  /**
   *  API Server rejected app version
   */
  BITCrashAPIAppVersionRejected,
  /**
   *  API Server returned empty response
   */
  BITCrashAPIReceivedEmptyResponse,
  /**
   *  Connection error with status code
   */
  BITCrashAPIErrorWithStatusCode
};
extern NSString *const kBITCrashErrorDomain;


/**
 *  HockeySDK Feedback error domain
 */
typedef NS_ENUM(NSInteger, BITFeedbackErrorReason) {
  /**
   *  Unknown error
   */
  BITFeedbackErrorUnknown,
  /**
   *  API Server returned invalid status
   */
  BITFeedbackAPIServerReturnedInvalidStatus,
  /**
   *  API Server returned invalid data
   */
  BITFeedbackAPIServerReturnedInvalidData,
  /**
   *  API Server returned empty response
   */
  BITFeedbackAPIServerReturnedEmptyResponse,
  /**
   *  Authorization secret missing
   */
  BITFeedbackAPIClientAuthorizationMissingSecret,
  /**
   *  No internet connection
   */
  BITFeedbackAPIClientCannotCreateConnection
};
extern NSString *const kBITFeedbackErrorDomain;


/**
 *  HockeySDK global error domain
 */
typedef NS_ENUM(NSInteger, BITHockeyErrorReason) {
  /**
   *  Unknown error
   */
  BITHockeyErrorUnknown
};
extern NSString *const __attribute__((unused)) kBITHockeyErrorDomain;
// HockeySDK
