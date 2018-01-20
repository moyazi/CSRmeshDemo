/*!
    Copyright [2015] Qualcomm Technologies International, Ltd.
*/
/* Note: this is an auto-generated file. */


#import <Foundation/Foundation.h>
#import "CSRRestBaseObject.h"
#import "CSRRestActionDeleteAck.h"


/*!
    Response Object of DeleteAck API for model Action
*/

@interface CSRRestActionDeleteAckResponse : CSRRestBaseObject


/*!
    Status of the request - Pending,Completed or TimeOut
*/
 typedef NS_OPTIONS(NSInteger, CSRRestActionDeleteAckResponseStatusEnum) {
  CSRRestActionDeleteAckResponseStatusEnumPending,
  CSRRestActionDeleteAckResponseStatusEnumCompleted,
  CSRRestActionDeleteAckResponseStatusEnumTimeOut,

};



/*!
    Status of the request - Pending,Completed or TimeOut
*/
@property(nonatomic) CSRRestActionDeleteAckResponseStatusEnum status;

/*!
    Status check URL for pending responses.
*/
@property(nonatomic) NSString* statusUrl;
  
/*!
    The actual Action DeleteAck response object
*/
@property(nonatomic) NSArray* deleteAck;
  
/*!
  Constructs instance of CSRRestActionDeleteAckResponse

  @param status - (CSRRestActionDeleteAckResponseStatusEnum) Status of the request - Pending,Completed or TimeOut
  @param statusUrl - (NSString*) Status check URL for pending responses.
  @param deleteAck - (NSArray*) The actual Action DeleteAck response object
  
  @return instance of CSRRestActionDeleteAckResponse
*/
- (id) initWithstatus: (CSRRestActionDeleteAckResponseStatusEnum) status     
       statusUrl: (NSString*) statusUrl     
       deleteAck: (NSArray*) deleteAck;
       

@end
