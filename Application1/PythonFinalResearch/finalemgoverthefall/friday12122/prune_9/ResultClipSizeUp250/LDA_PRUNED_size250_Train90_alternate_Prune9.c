// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_9\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 89.81%
// test_accuracy: 84.38%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt']}
// generated: 2025-12-12 16:06:33
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.067581, 1.067568,
    0.010520, -0.010537,
    0.686290, -0.686305,
    0.784444, -0.784417,
    1.138721, -1.138774,
    -1.550015, 1.550085,
    0.374064, -0.374067,
    -0.331366, 0.331367,
    1.033475, -1.033557,
    -0.584990, 0.585214,
    -0.441240, 0.441176,
    0.422748, -0.422834,
};

float Cg_init[2] = {
    -0.726075, -0.726095
};

float xstd_init[12] = {
    0.003949, 0.001447, 0.097481, 0.169735, 0.001788, 0.000554, 0.034485, 0.091350, 0.000572, 0.000095, 0.019865, 0.069582
};

float xmean_init[12] = {
    0.010024, -0.006197, 0.167901, 0.571111, 0.003376, -0.007669, 0.009506, 0.055556, 0.003164, -0.007806, 0.004691, 0.067407
};

