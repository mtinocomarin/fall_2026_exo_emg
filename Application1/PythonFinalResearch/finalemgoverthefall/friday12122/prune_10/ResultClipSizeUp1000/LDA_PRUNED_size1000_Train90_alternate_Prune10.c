// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_10\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 83.70%
// test_accuracy: 75.00%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_32.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-12 16:07:41
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.545800, 0.545781,
    -0.301197, 0.301235,
    0.463313, -0.463351,
    0.536390, -0.536377,
    0.924883, -0.924910,
    -0.856392, 0.856463,
    -0.135260, 0.135233,
    -0.137347, 0.137326,
    0.611892, -0.611914,
    0.088721, -0.088655,
    -0.345681, 0.345666,
    -0.010392, 0.010348,
};

float Cg_init[2] = {
    -0.432111, -0.432129
};

float xstd_init[12] = {
    0.003125, 0.001209, 0.098730, 0.161254, 0.001158, 0.000344, 0.017861, 0.063477, 0.000517, 0.000070, 0.013678, 0.060188
};

float xmean_init[12] = {
    0.009443, -0.006365, 0.170446, 0.581984, 0.003001, -0.007776, 0.004345, 0.044656, 0.003074, -0.007817, 0.003320, 0.061944
};

