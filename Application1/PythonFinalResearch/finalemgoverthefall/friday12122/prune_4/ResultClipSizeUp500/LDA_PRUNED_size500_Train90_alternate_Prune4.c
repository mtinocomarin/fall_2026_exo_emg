// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_4\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 80.21%
// test_accuracy: 77.78%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_27.txt', 'act1\\trial_34.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-12 16:04:03
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.763477, 0.763411,
    -0.162392, 0.162408,
    0.381339, -0.381348,
    0.732334, -0.732313,
    0.735804, -0.735704,
    -0.972315, 0.972237,
    0.048084, -0.048087,
    0.004289, -0.004318,
    -0.410675, 0.410434,
    0.438387, -0.437762,
    -0.416150, 0.415933,
    0.167908, -0.168192,
};

float Cg_init[2] = {
    -0.328234, -0.328191
};

float xstd_init[12] = {
    0.003875, 0.001437, 0.103199, 0.165109, 0.001573, 0.000468, 0.026759, 0.078286, 0.001483, 0.000088, 0.016593, 0.065507
};

float xmean_init[12] = {
    0.009907, -0.006226, 0.169121, 0.582917, 0.003200, -0.007725, 0.006759, 0.050069, 0.003229, -0.007807, 0.004630, 0.068472
};

