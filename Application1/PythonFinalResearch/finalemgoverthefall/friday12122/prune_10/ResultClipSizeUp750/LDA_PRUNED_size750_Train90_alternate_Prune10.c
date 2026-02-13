// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_10\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 85.85%
// test_accuracy: 78.57%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_36.txt', 'act2\\trial_39.txt']}
// generated: 2025-12-12 16:07:33
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.430146, 0.430126,
    -0.589261, 0.589278,
    0.393337, -0.393350,
    0.742758, -0.742748,
    1.110532, -1.110422,
    -0.937895, 0.937741,
    -0.264580, 0.264624,
    -0.177879, 0.177881,
    0.784195, -0.784298,
    -0.061567, 0.061844,
    -0.380828, 0.380741,
    -0.086802, 0.086673,
};

float Cg_init[2] = {
    -0.509394, -0.509389
};

float xstd_init[12] = {
    0.003569, 0.001245, 0.103201, 0.169342, 0.001312, 0.000406, 0.021337, 0.070511, 0.000534, 0.000076, 0.015664, 0.065412
};

float xmean_init[12] = {
    0.009628, -0.006313, 0.172089, 0.579890, 0.003101, -0.007751, 0.005641, 0.048242, 0.003118, -0.007810, 0.004212, 0.068627
};

