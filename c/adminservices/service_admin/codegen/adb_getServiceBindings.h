

        #ifndef ADB_GETSERVICEBINDINGS_H
        #define ADB_GETSERVICEBINDINGS_H

       /**
        * adb_getServiceBindings.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: SNAPSHOT  Built on : Jan 19, 2010 (01:47:08 IST)
        */

       /**
        *  adb_getServiceBindings class
        */

        

        #include <stdio.h>
        #include <axiom.h>
        #include <axis2_util.h>
        #include <axiom_soap.h>
        #include <axis2_client.h>

        #include "axis2_extension_mapper.h"

        #ifdef __cplusplus
        extern "C"
        {
        #endif

        #define ADB_DEFAULT_DIGIT_LIMIT 1024
        #define ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT 64
        

        typedef struct adb_getServiceBindings adb_getServiceBindings_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_getServiceBindings_t
         * @param env pointer to environment struct
         * @return newly created adb_getServiceBindings_t object
         */
        adb_getServiceBindings_t* AXIS2_CALL
        adb_getServiceBindings_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _getServiceBindings adb_getServiceBindings_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_getServiceBindings_free (
            adb_getServiceBindings_t* _getServiceBindings,
            const axutil_env_t *env);

        /**
         * Free adb_getServiceBindings_t object
         * @param  _getServiceBindings adb_getServiceBindings_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_getServiceBindings_free_obj (
            adb_getServiceBindings_t* _getServiceBindings,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        
        

        /**
         * Getter for serviceName. 
         * @param  _getServiceBindings adb_getServiceBindings_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_getServiceBindings_get_serviceName(
            adb_getServiceBindings_t* _getServiceBindings,
            const axutil_env_t *env);

        /**
         * Setter for serviceName.
         * @param  _getServiceBindings adb_getServiceBindings_t object
         * @param env pointer to environment struct
         * @param arg_serviceName axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_getServiceBindings_set_serviceName(
            adb_getServiceBindings_t* _getServiceBindings,
            const axutil_env_t *env,
            const axis2_char_t*  arg_serviceName);

        /**
         * Resetter for serviceName
         * @param  _getServiceBindings adb_getServiceBindings_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_getServiceBindings_reset_serviceName(
            adb_getServiceBindings_t* _getServiceBindings,
            const axutil_env_t *env);

        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether serviceName is nill
         * @param  _getServiceBindings adb_getServiceBindings_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_getServiceBindings_is_serviceName_nil(
                adb_getServiceBindings_t* _getServiceBindings,
                const axutil_env_t *env);


        
        /**
         * Set serviceName to nill (currently the same as reset)
         * @param  _getServiceBindings adb_getServiceBindings_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_getServiceBindings_set_serviceName_nil(
                adb_getServiceBindings_t* _getServiceBindings,
                const axutil_env_t *env);
        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _getServiceBindings adb_getServiceBindings_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_getServiceBindings_deserialize(
            adb_getServiceBindings_t* _getServiceBindings,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _getServiceBindings adb_getServiceBindings_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_getServiceBindings_deserialize_obj(
            adb_getServiceBindings_t* _getServiceBindings,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _getServiceBindings adb_getServiceBindings_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_getServiceBindings_declare_parent_namespaces(
                    adb_getServiceBindings_t* _getServiceBindings,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _getServiceBindings adb_getServiceBindings_t object
         * @param env pointer to environment struct
         * @param getServiceBindings_om_node node to serialize from
         * @param getServiceBindings_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_getServiceBindings_serialize(
            adb_getServiceBindings_t* _getServiceBindings,
            const axutil_env_t *env,
            axiom_node_t* getServiceBindings_om_node, axiom_element_t *getServiceBindings_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _getServiceBindings adb_getServiceBindings_t object
         * @param env pointer to environment struct
         * @param getServiceBindings_om_node node to serialize from
         * @param getServiceBindings_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_getServiceBindings_serialize_obj(
            adb_getServiceBindings_t* _getServiceBindings,
            const axutil_env_t *env,
            axiom_node_t* getServiceBindings_om_node, axiom_element_t *getServiceBindings_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_getServiceBindings is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_getServiceBindings_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_getServiceBindings_t
         * @param env pointer to environment struct
         * @param _serviceName axis2_char_t*
         * @return newly created adb_getServiceBindings_t object
         */
        adb_getServiceBindings_t* AXIS2_CALL
        adb_getServiceBindings_create_with_values(
            const axutil_env_t *env,
                axis2_char_t* _serviceName);

        


                /**
                 * Free adb_getServiceBindings_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _getServiceBindings adb_getServiceBindings_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                axis2_char_t* AXIS2_CALL
                adb_getServiceBindings_free_popping_value(
                        adb_getServiceBindings_t* _getServiceBindings,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for serviceName by property number (1)
         * @param  _getServiceBindings adb_getServiceBindings_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_getServiceBindings_get_property1(
            adb_getServiceBindings_t* _getServiceBindings,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_GETSERVICEBINDINGS_H */
    

